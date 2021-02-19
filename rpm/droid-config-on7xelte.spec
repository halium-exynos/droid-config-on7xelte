# These and other macros are documented in ../droid-configs-device/droid-configs.inc
# Feel free to cleanup this file by removing comments, once you have memorised them ;)

%define device on7xelte
%define vendor samsung

%define vendor_pretty Samsung
%define device_pretty Galaxy J7 Prime

%define community_adaptation 1
%define pixel_ratio 1.25
%define have_modem 1

%define ofono_enable_plugins bluez5,hfp_ag_bluez5
%define ofono_disable_plugins bluez4,dun_gw_bluez4,hfp_ag_bluez4,hfp_bluez4,dun_gw_bluez5,hfp_bluez5

%include droid-configs-device/droid-configs.inc
%include patterns/patterns-sailfish-device-adaptation-on7xelte.inc
%include patterns/patterns-sailfish-device-configuration-on7xelte.inc
