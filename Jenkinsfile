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
                    sh 'docker build -t scientific-calculator .'
                }
            }
        }

        stage('Push Docker Image') {
            steps {
                withDockerRegistry([credentialsId: 'DockerHubCred', url: 'https://index.docker.io/v1/']) {
                    sh 'docker tag scientific-calculator devenkapadia/scientific-calculator:latest'
                    sh 'docker push devenkapadia/scientific-calculator:latest'
                }
            }
        }

        stage('Run Ansible Playbook for Deployment') {
            steps {
                script {
                    ansiblePlaybook(
                        playbook: 'deploy.yml',
                        inventory: 'inventory'
                    )
                }
            }
        }
    }
}
