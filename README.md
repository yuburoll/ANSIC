![ansicImage](images/ansic16x9.jpg)

# ANSIC

row staggered 40~42 key split keyboard under 100x100mm PCB

The name "ansic" is repose in Korean.

## Preparation

- 2x pro micro (Approx. 4-8$)

- 2x ansic PCB Boards (5 boards are 2$ on JLC w/o shipping cost)

- 1x printed case sets, 2 parts total (Approx. 6$ if you buy printed one on JLC. Use braced ones for 3d print)

- 2x keyboard plates (Approx. 4~12$ which method you use: 3DP, FR4 fab, CNC, laser cut. etc...)

- 2x back plates (Approx. 6~18$ which method you use: 3DP, FR4 fab, CNC, laser cut. etc..)

- 42x diodes (Approx. 1$)

- 20x M2x6 screws, flathead (Approx. 1$)

- 2x PJ320A 1/8(3.5mm) TRRS connector (Approx. 1$)

- 2x 4x4x1.5mm tact switches (Approx. 1$)

- 1x 1/8(3.5mm) TRRS cable (Approx. 2$, may TRS cable can take the place.)

- 43x MX Hotswap Sockets (Approx. 4$) (or, use soldering version)

- 0~2x Plate Mounted 2u Keyboard Stabilizers (Approx. 1$ when cheap)

- 40~42x MX Keyswitches & Keycaps (Maybe this cost varies too much. 10$ on average)

Approx. 42-55$(w/o shipping cost) needed to build one.

for wireless build, you may additionally need:

- 2x "Wireless" promicro (eg. nrf52840)

- 2x 12c02 slide switch

- 2x printed keyswitch part

- 2x xx2030 Li-po battery (eg. 902030) and socket(in 1.25)

## Default Keymap

![ansicKeymap](images/ansicKeymap.png)

Holding the key triggers front legend.

There are three layers - Symbol, Fn, Mouse - which can be noticed by the color legends. ◇ Means Transparent; which uses base keymap.

## Build Guides

work in progress. sorry! I uploaded images for buildguide at [images](images) folder.

also you may refer to the pictures below:

#### Wired

![WiredFront](images/ansicBuildWiredFront.jpg)

![WiredBack](images/ansicBuildWiredBack.jpg)

#### Wireless

![WirelessFront](images/ansicBuildWirelessFront.jpg)

![WirelessBack](images/ansicBuildWirelessBack.jpg)

## Note

On released version, they have merged thumb cluster based on SW21(outside thumb cluster).

(prototype) tagged versions are legacy file, which have merged thumb cluster based on SW20(middle thumb cluster). only the gerbers before Jan. 30, 2026 have those old schema.

## Licenses

all codes follow MIT license.

all designs and the hardware board follow CC BY-SA 4.0 license.

If you want to make a commercial product, it would be appreciated if you sponsor some bucks for me.

![ansicGerber](images/ansicGerber.png)
