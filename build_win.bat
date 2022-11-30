@ECHO OFF
    : Periodic Bunsen build script
    : 2022-11-29 07:21:00 PM

    powershell write-host -fore green Starting Job...

    : Set the path to the Bunsen source code
    cd ./src

    powershell write-host -fore red Building Bunsen...

    : Start the build
    gcc main.c cli.c periodic.c hash.c -o bunsen

    : Move the executable to the root directory
    move bunsen.exe ..

    powershell write-host -fore green Job Complete!

    : Return to the root directory
    cd ..

    echo Press any key to exit...
    pause >nul

    EXIT /B 0