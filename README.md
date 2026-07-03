# Motorcycle Lean Angle Logger

Logging system for motorcycle lean angles.

![](./doc/plantuml/system.png)

## Project Structure

## Setup (linux)

## Install dependencies

- `sudo apt install stlink-tools`

### Setup Repository

- Initialize submodules (if not already)
  - `git submodule update --init --recursive`
- Setup python virtual environment 
  - `python3 -m venv .venv && source .venv/bin/activate`
  - `cd zephyrproject && pip install -r zephyr/scripts/requirements.txt`
- Setup the zephyr project
  - `west init -l zephyr`
  - `west config manifest.project-filter -- -.*,+zephyr,+cmsis,+cmsis_6,+hal_stm32,+fatfs`
  - `west update`
  - `west sdk install --gnu-toolchains arm-zephyr-eabi --install-dir zephyr-sdk`

### CLion IDE Configuration

- Open directory at repository root
- Setup toolchain and environment
  - Preferences > Build, Execution, Deployment > Toolchains
  - '+' (Add) > System
  - Name > "zephyr (lean_angle_logger)"
  - Add Environment > From File
    - Specify path to .venv/bin/activate
- Load the CMake project
  - In the file tree, right-click `app/CMakeLists.txt` > Load CMake Project
  - This should load the preconfigured CMake configuration

#### Building

- Build the "zephyr_final" configuration

#### Debugging (Segger JLink)

- See [guide](https://kb.segger.com/Connecting_to_STM32_Nucleo_boards) for connections to board
- To view console output, need to add linux user to dialout: `sudo usermod -aG dialout $USER`

#### Flashing (ST-Link)

- Run the st-link-flash CMake configuration