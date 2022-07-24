Nếu dùng Win 10 trở lên và sử dụng adafruit-nrfutil: 
      adafruit-nrfutil.exe --verbose dfu serial --package nemm_bootloader-0.6.4-6-g36d0e80-dirty_s140_6.1.1.zip --port COM11 -b 115200 --singlebank --touch 1200
Nếu dùng Win 10 trở lên và OpenOCD: 
      openocd -f interface/cmsis-dap.cfg -f target/nrf52.cfg -c "gdb_flash_program enable" -c "gdb_breakpoint_override hard" -c "init" -c "reset halt" -c "flash write_image erase  nemm_bootloader-0.6.4-6-g36d0e80-dirty_s140_6.1.1.hex" -c “shutdown”

      hoặc

      openocd -f interface/stlink-v2.cfg -f target/nrf52.cfg -c "gdb_flash_program enable" -c "gdb_breakpoint_override hard" -c "init" -c "reset halt" -c "flash write_image erase  nemm_bootloader-0.6.4-6-g36d0e80-dirty_s140_6.1.1.hex" -c “shutdown”