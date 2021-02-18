%package -n patterns-sailfish-device-adaptation-on7xelte
Summary: Jolla HW Adaptation on7xelte
Requires: droid-hal-on7xelte
Requires: droid-hal-on7xelte-img-boot
Requires: droid-hal-on7xelte-kernel-modules
Requires: droid-config-on7xelte-sailfish
Requires: droid-config-on7xelte-pulseaudio-settings
Requires: droid-config-on7xelte-policy-settings
Requires: droid-config-on7xelte-preinit-plugin
Requires: droid-config-on7xelte-flashing
Requires: droid-config-on7xelte-bluez5
Requires: droid-hal-version-on7xelte

# Hybris packages
Requires: libhybris-libEGL
Requires: libhybris-libGLESv2
Requires: libhybris-libwayland-egl

# Sensors
Requires: hybris-libsensorfw-qt5

# Vibra
Requires: ngfd-plugin-native-vibrator
Requires: qt5-feedback-haptics-native-vibrator

# Needed for /dev/touchscreen symlink
Requires: qt5-plugin-generic-evdev

Requires: pulseaudio-modules-droid
Requires: pulseaudio-modules-droid-hidl

# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# For hybris devices with droidmedia, see HADK pdf for more information
Requires: gstreamer1.0-droid
Requires: gmp-droid

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

# USB mode controller
Requires: usb-moded

# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# enable device lock and allow to select untrusted software
Requires: jolla-devicelock-daemon-encsfa

# Enable home encryption
#Requires: sailfish-device-encryption

# For GPS
Requires: geoclue-provider-hybris

%description -n patterns-sailfish-device-adaptation-on7xelte
Pattern with packages for on7xelte HW Adaptation

%files -n patterns-sailfish-device-adaptation-on7xelte
