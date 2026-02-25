class BoardPassCheckUp {
    private String flightID;
    private String destination;
    private BoardPass ticket;
    public BoardPassCheckUp(String flightID, String destination, String seatNumber, String gate) {
        this.flightID = flightID;
        this.destination = destination;
        this.ticket = new BoardPass(seatNumber, gate);
    }
    public String toString() {
        return "Flight " + flightID + " to " + destination + "\n" + ticket.toString();
    }
}