 function calculateTotal() {
            const roomPrice = parseFloat(document.getElementById('roomType').value) || 0;
            const checkInDate = document.getElementById('checkIn').value;
            const checkOutDate = document.getElementById('checkOut').value;
            const totalDisplay = document.getElementById('totalPrice');

            if (checkInDate && checkOutDate && roomPrice > 0) {
                const start = new Date(checkInDate);
                const end = new Date(checkOutDate);

                // Calculate time difference in milliseconds
                const timeDiff = end - start;
                
                // Convert to days (1000ms * 60s * 60m * 24h)
                const daysDiff = timeDiff / (1000 * 3600 * 24);

                if (daysDiff > 0) {
                    const totalCost = daysDiff * roomPrice;
                    totalDisplay.innerHTML = `Rs. ${totalCost.toLocaleString()} <br><small>(${daysDiff} Nights)</small>`;
                    totalDisplay.style.color = "#2c3e50";
                } else {
                    totalDisplay.innerText = "Invalid Dates (Check-out must be after Check-in)";
                    totalDisplay.style.color = "red";
                }
            } else {
                totalDisplay.innerText = "Rs. 0";
            }
        }

      
        function confirmBooking(event) {
            event.preventDefault(); // Page reload hone se rokta hai
            
            const totalText = document.getElementById('totalPrice').innerText;
            
            if(totalText === "Rs. 0" || totalText.includes("Invalid")) {
                alert("Please select valid dates and room type first!");
            } else {
                alert("Booking Successful!\nYour Total Bill is: " + totalText + "\nWe will contact you shortly.");
                // Yahan aap form reset bhi kar sakte hain
                document.getElementById('bookingForm').reset();
                document.getElementById('totalPrice').innerText = "Rs. 0";
            }
        }