# Wind Farm Performance Tracker – ITP / UFRN

This repository contains a C program developed for an assignment in **Introduction to Programming Techniques** (*Introdução às Técnicas de Programação – ITP*), part of the Bachelor's degree in Information Technology (**BTI**) at the Federal University of Rio Grande do Norte (**UFRN**).

The program evaluates the energy production performance of a set of wind turbines in real-time with **$O(1)$ memory complexity**, processing inputs as a stream without using arrays or vectors.

---

## Overview

The program reads the total number of turbines and their respective power outputs, computing three core metrics:
1. Total energy generated across all turbines.
2. The index (1-based) of the turbine with the highest output.
3. The truncated integer average production per turbine.

In the case of a tie for the highest production, the program retains the index of the first turbine that reached the record.

---

## Input & Output Format

### Input
* The first line contains an integer $N$ ($N \ge 1$), representing the total number of wind turbines.
* The following lines contain $N$ integer values representing the energy output of each turbine.

### Output
The program outputs three lines:
1. Total energy produced (`long long`).
2. Index of the best-performing turbine (1-based integer).
3. Truncated integer average energy output per turbine (`long long`).

---

## Compilation & Execution

To compile and run the program using `gcc`:

```bash
# Compile
gcc -O2 main.c -o wind_farm

# Run
./wind_farm
