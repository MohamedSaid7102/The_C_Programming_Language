@echo off

set msg=%*

if "%msg%"=="" (
    rem Create auto message with date & time
    for /f "tokens=1-3 delims=/ " %%a in ("%date%") do (
        for /f "tokens=1-2 delims=: " %%x in ("%time%") do (
            set msg=Auto commit - %%a-%%b-%%c %%x:%%y
        )
    )
)

git add .
git commit -m "%msg%"
git push
