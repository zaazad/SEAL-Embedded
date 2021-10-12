
```powershell
set CC and CXX

cd device
cmake -S . -B build -DSE_BUILD_LOCAL=ON
cmake --build build

./build/bin/seal_embedded_tests
```

