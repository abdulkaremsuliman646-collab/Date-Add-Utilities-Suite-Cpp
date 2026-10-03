# Comprehensive Date Arithmetic Utilities Suite (C++) 📅⚡

A modular and robust algorithmic C++ suite providing complete calendar manipulation across multiple time intervals (days, weeks, months, years, decades, centuries, and millennia).

---

## 🌟 Implemented Utilities (Problems 20 to 32)
1. **Day & Week Modifiers:** `IncreaseDateByOneDay`, `IncreaseDateByXDays`, `IncreaseDateByOneWeek`, `IncreaseDateByXWeeks`.
2. **Month Arithmetic & End-of-Month Clamping:** Automatically validates month bounds (e.g., advancing Jan 31 by one month clamps to Feb 28/29).
3. **Decade, Century & Millennium Jumps:** Includes both iterative and optimized $O(1)$ arithmetic jumps (`Faster` variants) avoiding redundant iterations.

---

## 💻 Sample Terminal Output
```text
Please enter a Day? 1
Please enter a Month? 1
Please enter a Year? 2026

Date After: 

01-Adding one day is: 2/1/2026
02-Adding 10 days is: 12/1/2026
03-Adding one week is: 19/1/2026
...
13-Adding One Century is: 19/6/2346
14-Adding One Millennium is: 19/6/3346
