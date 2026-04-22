# 🏨 Crystal Hotel Management System
A command-line hotel booking and management system written in C.
**Work in Progress — Actively Being Improved.**

## ⚠️ Status: In Progress
This project started as a learning exercise and is being actively refactored and improved. The code has gone through significant cleanup and still has areas being worked on.

---

## ✅ Features Implemented
- Three hotel class tiers with different pricing:
  - Executive Class: ₦80,000/day
  - Local Class: ₦60,000/day
  - Normal Class: ₦30,000/day
- Dynamic lodge fee calculation based on number of days
- Random 6-digit confirmation code generation using `srand/rand`
- Payment verification system with return values
- `confirm_Payment()` function — reusable across all 3 hotel classes
- `Food()` function — handles food and snack menu selection
- Food menu only accessible after correct confirmation code is entered
- ANSI color-coded terminal UI for visual appeal
- Basic food ordering menu (partially implemented)

---

## How to Run
```bash
gcc hotel_management_system.c -o hotel
./hotel
```

---

## What Works
- Hotel class selection (Executive, Local, Normal)
- Dynamic lodge fee: `lodge_Days * daily_rate` (no more repeated if blocks)
- Random 6-digit confirmation code instead of hardcoded `123456`
- `confirm_Payment()` returns `1` or `0` to control program flow
- `Food()` only runs after the correct code is entered
- Payment rejection message if user hasn't paid

---

## Known Issues / TODO
- [ ] Week-based booking not implemented — only days work currently
- [ ] Food menu only responds to choice `1` (Beans and Rice), options 2–5 do nothing
- [ ] Snack menu displays options but never processes the user's selection
- [ ] Missing `else` block for `pay_Check == 0` in classes 2 and 3
- [ ] Input validation is weak — entering letters instead of numbers breaks the program
- [ ] `room_number` and `dailyRate` variables declared but never used
- [ ] No checkout or session summary at the end

---

## What Changed in the Latest Refactor
Before this refactor, the code had:
- A hardcoded confirmation code (`123456`) that every guest used
- The same lodge fee calculation copy-pasted for each hotel class:
```c
if(lodge_Days == 1) { lodge_Fee = 1 * 80000; }
if(lodge_Days == 2) { lodge_Fee = 2 * 80000; }
// ...repeated for 3, 4, 5, 6 and again for Local and Normal class
```
- Food and confirmation logic scattered and duplicated inside `main()`

After refactor:
```c
// Lodge fee is now one line
lodge_Fee = lodge_Days * daily_rate;

// Confirmation and food are now clean function calls
if(confirm_Payment(generated_code) == 1){
    Food();
}
```

---

## What I Learned
- Managing complex nested conditional logic in C
- Calculating fees dynamically based on user input
- Building multi-step user workflows
- Terminal formatting with ANSI color codes
- How painful it is to maintain repetitive code (learned the hard way)
- The value of functions — `confirm_Payment()` and `Food()` now serve all 3 hotel classes
- How return values from functions can control program flow
- `srand(time(NULL))` and `rand()` for generating random numbers

---

## What I'd Do Differently
Looking back at this project, a better approach would be:

```c
// Use a struct to store hotel class info
typedef struct {
    char* class_name;
    int daily_rate;
} HotelClass;

// Single function for fee calculation
double calculateFee(int days, int rate) {
    return days * rate;
}
```

This would eliminate the repeated `if(hotel_class == 1)... else if(hotel_class == 2)...` blocks entirely.

Other improvements for a future version:
1. Use a struct to store room and guest information
2. Store menu items in arrays instead of individual `printf` lines
3. Implement proper input validation with loops
4. Add a checkout summary showing total cost and stay details
5. Complete the full food and snack ordering system
6. Handle week-based bookings properly

---

## Learning Value
Despite being incomplete, this project has been valuable because it taught me:
- How NOT to structure a large program (and why it matters)
- The real pain of maintaining copy-pasted code across multiple branches
- Why planning before coding saves time later
- The difference between working code and clean code
- When to stop and refactor instead of pushing forward with messy logic
- How small improvements (like extracting a function) can make a big difference in readability

---

## Code Structure
```
hotel_management_system.c
├── confirm_Payment()   → handles 6-digit code verification
├── Food()              → handles food and snack menu
└── main()
    ├── Banner + name input
    ├── Hotel class selection (1, 2, 3)
    ├── Week or days selection
    ├── Lodge fee calculation
    ├── Payment check
    └── confirm_Payment() → Food()
```

---

## Author
**Toluwanimi Alfred Fadipe**
Built while actively learning C programming. This project honestly represents my learning progression — including the mistakes, the refactoring, and the gradual improvement. Still being worked on.
