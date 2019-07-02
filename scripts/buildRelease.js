sh scripts/updateSubModules.js
sh scripts/copyAdBlockTPFiles.js

ninja -C out/DefaultR chrome_public_apk
ninja -C out/Default64 chrome_public_apk

third_party/android_tools/sdk/build-tools/25.0.2/zipalign -v -p 4 out/DefaultR/apks/Dissenter.apk out/DefaultR/apks/Dissenterarm.apk

third_party/android_tools/sdk/build-tools/25.0.2/zipalign -v -p 4 out/Default64/apks/Dissenter.apk out/Default64/apks/Dissenter64.apk
