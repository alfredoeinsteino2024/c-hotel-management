# 🏨 Crystal Hotel Management System

A command-line hotel booking and management system written in C. **Work in Progress.**

## ⚠️ Status: Incomplete

This project was a learning exercise in building a larger multi-feature application. Some features are not fully implemented, and the code has areas that need refactoring.

## Features Implemented

- ✅ Three hotel class tiers with different pricing:
  - Executive Class: ₦80,000/day
  - Local Class: ₦60,000/day
  - Normal Class: ₦30,000/day
- ✅ Dynamic pricing calculation based on number of days
- ✅ Payment verification system with 6-digit confirmation codes
- ✅ ANSI color-coded terminal UI for visual appeal
- ✅ Basic food ordering menu (partially implemented)
- ✅ Multiple day booking options (1-5 days, or custom)

## How to Run
```bash
gcc hotel_management_system.c -o hotel
./hotel
```

## What Works

- Hotel class selection
- Daily rate calculation for 1-6+ days
- Payment confirmation flow
- Basic menu structure

## Known Issues / TODO

- [ ] Significant code repetition (same logic copy-pasted for each hotel class)
- [ ] Week-based booking not implemented (only days work)
- [ ] Food ordering logic incomplete and has syntax errors
- [ ] Input validation needs improvement
- [ ] Some scanf bugs causing double input prompts
- [ ] Missing closing braces in food section
- [ ] Hardcoded confirmation code (123456) - not secure

## What I Learned

- Managing complex nested conditional logic
- Calculating fees dynamically based on user choices
- Building multi-step user workflows
- Terminal formatting with ANSI color codes
- When code needs refactoring (learned the hard way!)
- The importance of functions to avoid repetition

## Why This is Incomplete

This was an early project before I learned about:
- Functions and modular code design
- Structs for organizing related data
- Arrays for managing similar items
- Better control flow patterns

If I revisited this project, I would:
1. Create separate functions for each hotel class
2. Use a struct to store room information
3. Store menu items in arrays
4. Implement proper input validation
5. Add error handling throughout
6. Complete the food ordering system

## Code Structure Issues

The main issue is repetitive code blocks like this appearing 3 times (once per hotel class):
```c
if(lodge_Days == 1) {
    scanf("%d", &lodge_Days);
    lodge_Fee = 1 * 80000;
    printf("\nTOTAL COST: N%.2lf", lodge_Fee);
}
// Repeated for days 2, 3, 4, 5, 6...
```

This should have been a single function with parameters.

## What I'd Do Differently
```c
// Example of better approach:
typedef struct {
    char* name;
    int daily_rate;
} HotelClass;

double calculateFee(int days, int rate) {
    return days * rate;
}
```

## Learning Value

Despite being incomplete, this project taught me:
- How NOT to structure a large program
- The pain of maintaining repetitive code
- Why planning before coding matters
- The value of breaking problems into functions
- When to stop and refactor vs. pushing forward

## Author

Built while learning C programming. This represents an early attempt at a complex application and shows honest learning progression, including mistakes and unfinished features.
