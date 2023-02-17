public class Flight {
    private String origin;
    private String destination;

    private Flight(String origin, String destination) {
        this.origin = origin;
        this.destination = destination;
    }
    public static class FlightBuilder {
        private String origin;
        private String destination;

        public FlightBuilder setOrigin(String origin) {
            this.origin = origin;
            return this;
        }

        public String getDestination() {
            return destination;
        }

        public FlightBuilder setDestination(String destination) {
            this.destination = destination;
            return this;
        }

        public Flight build() {
            return new Flight(origin, destination);
        }
    }

    public void bookFlight() {
        System.out.println("Flight booked from " + origin + " to " + destination);
    }
}
