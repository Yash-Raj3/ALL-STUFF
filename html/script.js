document.getElementById('bookingForm').addEventListener('submit', function(event) {
    event.preventDefault(); // Prevent the default form submission

    const checkinDate = document.getElementById('checkin').value;
    const checkoutDate = document.getElementById('checkout').value;
    const roomType = document.getElementById('roomType').value;
    const guests = document.getElementById('guests').value;

    if (new Date(checkoutDate) <= new Date(checkinDate)) {
        alert("Check-out date must be after check-in date.");
        return;
    }

    // In a real application, you would send this data to a server/backend
    // to process the booking and store it in a database.
    console.log("Booking Details:", { checkinDate, checkoutDate, roomType, guests });
    alert(`Booking successful for a ${roomType} room from ${checkinDate} to ${checkoutDate} for ${guests} guest(s)!`);

    // Reset the form after submission
    this.reset();
});
