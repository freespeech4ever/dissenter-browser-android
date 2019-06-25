sh scripts/updateSubModules.js
sh scripts/copyAdBlockTPFiles.js

ninja -C out/DefaultR chrome_public_apk
ninja -C out/DefaultRx86 chrome_public_apk

jarsigner -verbose -sigalg SHA1withRSA -digestalg SHA1 -keystore out/DefaultR/apks/linkbubble_play_keystore out/DefaultR/apks/Dissenter.apk linkbubble
third_party/android_tools/sdk/build-tools/25.0.2/zipalign -v -p 4 out/DefaultR/apks/Dissenter.apk out/DefaultR/apks/Dissenterarm.apk

jarsigner -verbose -sigalg SHA1withRSA -digestalg SHA1 -keystore out/DefaultRx86/apks/linkbubble_play_keystore out/DefaultRx86/apks/Dissenter.apk linkbubble
third_party/android_tools/sdk/build-tools/25.0.2/zipalign -v -p 4 out/DefaultRx86/apks/Dissenter.apk out/DefaultRx86/apks/Dissenterx86.apk
