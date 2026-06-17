# Motorcycle Lean Angle Logger

Logging system for motorcycle lean angles.

![](./doc/plantuml/system.png)

## Project Structure

## Setup (linux)

- Initialize submodules (if not already)
  - `git submodule update --init --recursive`
- Setup python virtual environment 
  - `python3 -m venv .venv && source .venv/bin/activate`
  - `cd zephyrproject && pip install -r zephyr/scripts/requirements.txt`
  - `python3 -m pip install west`
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

## Building and Debugging

- If using CLion, use the "all" run configuration