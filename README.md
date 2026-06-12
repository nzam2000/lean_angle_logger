# Motorcycle Lean Angle Logger

Logging system for motorcycle lean angles.

![](./doc/plantuml/system.png)

## Project Structure

## Setup (linux)

- Setup python virtual environment 
  - `python3 -m venv .venv && source .venv/bin/activate`
  - `cd zephyrproject && pip install -r zephyr/scripts/requirements.txt`
  - `python3 -m pip install west`
- Setup the zephyr project
  - `west init -l zephyr`
  - `west config manifest.project-filter -- -.*,+zephyr,+cmsis,+cmsis_6,+hal_stm32,+fatfs`
  - `west update`
  - `west sdk install --gnu-toolchains arm-zephyr-eabi --install-dir zephyr-sdk`

## Building

