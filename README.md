# PRNG-B-32: A Fast, Statistically-Strong Pseudorandom Number Generator 🎲

![PRNG-B-32](https://img.shields.io/badge/PRNG-B--32-blue.svg) ![GitHub Releases](https://img.shields.io/badge/releases-latest-brightgreen.svg)

Welcome to the PRNG-B-32 repository! This project provides a fast and statistically-strong pseudorandom number generator (PRNG) that produces 32-bit integers with a period of \(2^{32}\). Whether you are developing games, simulations, or any application that requires random numbers, PRNG-B-32 can meet your needs effectively.

## Table of Contents

1. [Introduction](#introduction)
2. [Features](#features)
3. [Installation](#installation)
4. [Usage](#usage)
5. [API Reference](#api-reference)
6. [Performance](#performance)
7. [Contributing](#contributing)
8. [License](#license)
9. [Contact](#contact)

## Introduction

Pseudorandom number generators are essential in various fields, including computer simulations, cryptography, and gaming. PRNG-B-32 stands out due to its speed and statistical properties. It is designed to produce high-quality random numbers quickly, making it suitable for performance-critical applications.

## Features

- **Fast Performance**: Generates random numbers with minimal overhead.
- **Statistically Strong**: Meets statistical randomness requirements for various applications.
- **32-Bit Output**: Produces 32-bit integers, ideal for most use cases.
- **Long Period**: Offers a period of \(2^{32}\), ensuring a wide range of outputs before repetition.

## Installation

To get started with PRNG-B-32, download the latest release from the [Releases section](https://github.com/Igx52/prng-b-32/releases). Follow these steps:

1. **Download the Release**: Visit the link above and download the appropriate file for your system.
2. **Execute the File**: Follow the instructions specific to your operating system to execute the downloaded file.

## Usage

Using PRNG-B-32 is straightforward. Below is a simple example of how to implement it in your project.

### Example Code

```python
import prng_b_32

# Initialize the PRNG
rng = prng_b_32.PRNG()

# Generate random numbers
for _ in range(10):
    print(rng.next())
```

### Functionality

- **Initialization**: Create an instance of the PRNG to start generating numbers.
- **Next Number**: Call the `next()` method to get the next random number.

## API Reference

### `PRNG`

- **Constructor**: `PRNG(seed=None)` - Initializes the PRNG. Optionally, you can provide a seed for reproducibility.
- **Method**: `next()` - Returns the next pseudorandom 32-bit integer.

### Example

```python
rng = prng_b_32.PRNG(seed=42)
print(rng.next())  # Generates a number based on the seed
```

## Performance

PRNG-B-32 is optimized for speed. Benchmarks show that it can generate thousands of random numbers per second, making it suitable for real-time applications. The statistical properties of the generated numbers have been tested against standard tests for randomness, confirming its reliability.

## Contributing

We welcome contributions to improve PRNG-B-32. If you have suggestions or find issues, please follow these steps:

1. Fork the repository.
2. Create a new branch for your feature or fix.
3. Make your changes and commit them.
4. Push to your branch and create a pull request.

Your contributions help enhance the quality and functionality of this project.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contact

For questions or suggestions, feel free to reach out. You can also visit the [Releases section](https://github.com/Igx52/prng-b-32/releases) for updates and downloads.

---

Thank you for checking out PRNG-B-32! We hope it serves your random number generation needs effectively.