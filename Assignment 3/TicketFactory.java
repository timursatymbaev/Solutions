public class TicketFactory {
    public static Ticket createTicket(String ticketType) {
        if (ticketType.equalsIgnoreCase("economy")) {
            return new Economy();
        }

        if (ticketType.equalsIgnoreCase("business")) {
            return new Business();
        }

        return null;
    }
}
