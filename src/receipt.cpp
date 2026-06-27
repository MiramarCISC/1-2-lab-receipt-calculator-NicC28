#include "receipt.hpp"

// TODO: Return the sum of all three item prices.
double calculateSubtotal(double item1, double item2, double item3) {
    // Add parentheses for clarity, though order of operations is correct
    return (item1 + item2 + item3);
}

// TODO: Return the sales tax for the subtotal using TAX_RATE.
double calculateTax(double subtotal) {
    // TAX_RATE is defined as a constant in receipt.hpp (7.75%)
    return subtotal * TAX_RATE;
}

// TODO: Return the tip amount.
// Example: if subtotal is 20.00 and tipPercent is 15,
// the tip should be 3.00.
double calculateTip(double subtotal, double tipPercent) {
    // Use 100.0 instead of 100 to ensure decimal division
    return subtotal * (tipPercent / 100.0);
}

// TODO: Return the final total.
double calculateTotal(double subtotal, double tax, double tip) {
    // Returns the final amount the customer owes
    return subtotal + tax + tip;
}