# Use OpenJDK as base image
FROM openjdk:17

# Set working directory
WORKDIR /app

# Copy built JAR file from target/ directory
COPY target/calculator-0.0.1-SNAPSHOT.jar /app/calculator.jar

# Expose port (Spring Boot default is 8080)
EXPOSE 9090

# Run the application
CMD ["java", "-jar", "/app/calculator.jar"]
