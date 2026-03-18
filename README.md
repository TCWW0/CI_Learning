# Simple C++ CI/CD Demo

This is a small C++ project built with CMake and verified by GitHub Actions.

## Local build

```bash
cmake -S . -B build
cmake --build build
./build/test
```

## What the CI does

- Runs on push to `main`
- Uses Ubuntu runner
- Installs `cmake` and `g++`
- Configures and builds the project
- Runs the test executable
