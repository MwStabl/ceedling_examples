#!/bin/sh

echo "make sure your project.yml has the following entries:
...
:enabled:
....
- gcov
"

ceedling gcov:all
ceedling utils:gcov

echo "open build/artifacts/gcov/GcovCoverageResults.html"
