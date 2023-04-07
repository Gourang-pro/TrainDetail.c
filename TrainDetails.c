#include <stdio.h>

int main() {
    // Train details
    char trainName[] = "Express";
    int trainNo = 12345;
    char destination[] = "New York";
    
    // Train timings
    int departureHour = 9;
    int departureMinute = 30;
    int arrivalHour = 12;
    int arrivalMinute = 45;
    
    // Train chart
    char chart[] = "Seats Available";
    
    // Display train information
    printf("Train Name: %s\n", trainName);
    printf("Train No: %d\n", trainNo);
    printf("Destination: %s\n", destination);
    
    // Display train timings
    printf("Departure Time: %d:%02d\n", departureHour, departureMinute);
    printf("Arrival Time: %d:%02d\n", arrivalHour, arrivalMinute);
    
    // Display train chart
    printf("Train Chart: %s\n", chart);
    
    return 0;
}
