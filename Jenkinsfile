pipeline {
    agent any
    triggers { 
        githubPush() 
    }

    environment {
        DOCKER_IMAGE_NAME = 'scientific-calculator'
        GITHUB_REPO_URL = 'https://github.com/devenkapadia/SPE_calculator.git'
    }

    stages {
        stage('Checkout Code') {
            steps {
                script {
                    git branch: 'main', url: "${GITHUB_REPO_URL}"
                }
            }
        }

        stage('Test with Maven') {
            steps {
                script {
                    sh 'mvn test -Dtest=CalculatorApplicationTests'
                }
            }
        }

        stage('Build with Maven') {
            steps {
                script {
                    sh 'mvn clean package'
                }
            }
        }

        stage('Build Docker Image') {
            steps {
                script {
                    sh 'docker build -t devenkapadia/scientific-calculator .'
                }
            }
        }

        stage('Push Docker Images') {
            steps {
                script {
                    docker.withRegistry('', 'DockerHubCred') {
                        sh 'docker push devenkapadia/scientific-calculator'
                    }
                }
            }
        }

        stage('Run Ansible Playbook') { 
            steps {
                script {
                    withEnv(["ANSIBLE_HOST_KEY_CHECKING=False"]) {   
                        ansiblePlaybook(
                            playbook: 'deploy.yml',
                            inventory: 'inventory'
                        )
                    }
                }
            }
        }
    }
}
