# electron-calldll-demo

Call win32 - bit DLL through ffi

## To Use

```bash
# Clone this repository
git clone https://github.com/JoinWDT/electron-calldll-demo.git
# Go into the repository
cd electron-calldll-demo
# Install dependencies
npm install
```
## Building
Make sure your electron is correct. If not, please re-install
 ```bash
 npm install --arch=ia32 -platform=win32 electron@4.0.0
 ```
Compile ffi and ref:
  ```bash
  cd .\node_modules\ffi
  node-gyp rebuild --target=4.0.0 --arch=ia32 --target_arch=ia32 --msvs_version=2015
  cd ..\ref
  node-gyp rebuild --target=4.0.0 --arch=ia32 --target_arch=ia32 --msvs_version=2015
   ```
DllProject is a 32-bit DLL
 ## Run
  ```bash
  npm start
  ```
