# ROOT Plotting Project

This project is a C++ application that uses the **ROOT framework** to generate various types of plots, such as histograms, curves, and scatter points. The program interacts with the user to decide what type of plot they wish to create and customizes the plot's appearance.

## Features

- **Interactive User Input:** The program asks the user for the type of plot they want to generate (histogram, curve, or points).
- **Plot Types:**
  - **Histogram:** Plots a histogram with random Gaussian data.
  - **Curve:** Plots a mathematical function (e.g., `sin(x)/x`).
  - **Points:** Plots scatter points representing a parabolic function (`y = x^2`).
- **Customization:** The program applies different styles for each plot type, such as marker color, line color, and fill styles.

## Prerequisites

To run this project, you must have the following software installed:

1. **C++ Compiler (g++ or any C++ compiler)**
2. **ROOT Framework** (for more details, visit [ROOT Install Guide](https://root.cern/install/))
3. **PCRE Library** (Perl Compatible Regular Expressions library)

### Installing ROOT Framework

You can install ROOT via package managers or by building it from source.