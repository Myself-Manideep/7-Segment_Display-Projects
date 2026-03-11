# 7-Segment_Display-Projects
# 8051 Microcontroller 7-Segment Display Projects

This repository contains projects using the **8051 microcontroller** to drive **7-segment displays**. The examples demonstrate how to display numbers on single and multiple segments, both individually and in combined form.

---

## 📂 Project List

1. **Single 7-Segment Display**
   - Displays digits (0–9) on one segment.
   - Teaches segment encoding and port mapping.

2. **Dual 7-Segment Display**
   - Displays two-digit numbers (00–99).
   - Demonstrates multiplexing and timing control.

3. **Triple 7-Segment Display**
   - Displays three-digit numbers (000–999).
   - Introduces efficient multiplexing and delay balancing.

4. **Quad 7-Segment Display**
   - Displays four-digit numbers (0000–9999).
   - Combines multiplexing with counter logic for larger ranges.

---

## ⚙️ Hardware Requirements

- 8051 Microcontroller (AT89C51 or compatible)
- Common Anode or Common Cathode 7-Segment Displays
- Current-limiting resistors
- Push-button switches (optional for input control)
- Breadboard and jumper wires
- Power supply (5V regulated)

---

## 🛠️ Software Requirements

- Keil uVision (for 8051 C/Assembly programming)
- Proteus (optional, for simulation)
- Flash programmer (for loading code onto hardware)

---

## 🚀 How to Run

1. Write or load the provided `.c` or `.asm` code into Keil.
2. Compile to generate the HEX file.
3. Load the HEX file into the microcontroller using a programmer.
4. Connect the 7-segment displays to the microcontroller ports.
   - Example: **P2** for segment lines, **P1** for digit selection.
5. Power the circuit and observe the displayed numbers.

---

## 📖 Learning Outcomes

- Understanding 7-segment display encoding (a–g segments).
- Driving single and multiple displays using GPIO.
- Implementing multiplexing for multi-digit displays.
- Handling counters and number formatting.
- Basics of delay generation and timing balance.

---

## 🔮 Future Extensions

- Add switch inputs for manual number increment/decrement.
- Display hexadecimal characters (A–F).
- Interface with external sensors to show real-time values.
- Use timer interrupts for smoother multiplexing.

---

## 👨‍💻 Author

Projects documented and implemented for **learning embedded systems with 8051**.  
Feel free to fork, modify, and experiment with these examples.
