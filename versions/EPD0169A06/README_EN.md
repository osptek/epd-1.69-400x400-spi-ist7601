<p align="left"><img alt="OSPTEK" src="./images/logo.png" width="200" /></p>

<h1 align="center">OSPTEK 1.69″ EPD 400×400 (IST7601CA0 · SPI)</h1>

<p align="center"><b>Round 6-color e-paper · SPI · IST7601CA0</b></p>

<p align="center"><a href="./README.md">简体中文</a> | English · <a href="../../README_EN.md">Family index</a></p>

<p align="center">
  <img alt="Size: 1.69 inch" src="https://img.shields.io/badge/Size-1.69%22-3498DB?style=flat-square" />
  <img alt="Resolution: 400x400" src="https://img.shields.io/badge/Resolution-400%C3%97400-8E44AD?style=flat-square" />
  <img alt="Interface: SPI" src="https://img.shields.io/badge/Interface-SPI-27AE60?style=flat-square" />
  <img alt="Driver: IST7601CA0" src="https://img.shields.io/badge/Driver-IST7601CA0-E7352C?style=flat-square" />
</p>

<p align="center"><img alt="OSPTEK 1.69 inch 400×400 EPD SPI module (IST7601CA0) product image" src="./images/product.png" width="640" /></p>

## Contents

- [Overview](#overview)
- [Specifications](#specifications)
- [Sample projects](#sample-projects)
- [Repository layout](#repository-layout)
- [Resources](#resources)
- [Buy](#buy)
- [Support](#support)

---

## Overview

OSPTEK **1.69″ 400×400 EPD** is a **SPI** round 6-color e-paper module driven by **IST7601CA0**. Suited to wearables, badges, and low-power IoT displays.

Spec ID (repository name): `epd-1.69-400x400-spi-ist7601`

Current module version: **EPD0169A06**. Electrical and mechanical details follow [`docs/EPD0169A06.pdf`](./docs/EPD0169A06.pdf).

## Specifications

| Item | Spec |
| ---- | ---- |
| Size | 1.69 inch |
| Type | Round 6-color e-paper (black / white / red / yellow / blue / green) |
| Resolution | 400×400 |
| Interface | SPI |
| Driver IC | IST7601CA0 |

> Full outline, FPC definition, power, and timing follow the product datasheet / driver IC datasheet.

## Sample projects

| Description | Path |
| ---- | ---- |
| ESP32-S3 · S3 DEMO board · IST7601 SPI 6-color e-paper | [`examples/esp32s3-idf5_ist7601-spi/`](./examples/esp32s3-idf5_ist7601-spi/) |

## Repository layout

```text
epd-1.69-400x400-spi-ist7601/             # repo root (nav: ../../README_EN.md)
└── versions/
    └── EPD0169A06/                       # full materials for this part number
        ├── README.md
        ├── README_EN.md
        ├── images/
        ├── docs/
        └── examples/
```

## Resources

### Product files

| Resource | Link |
| ---- | ---- |
| Product datasheet | [`docs/EPD0169A06.pdf`](./docs/EPD0169A06.pdf) |
| 1.69″ six-color e-paper adapter (for S3 DEMO board) | [`docs/1.69寸6色墨水屏转接板_适用于S3 DEMO底板.pdf`](./docs/1.69%E5%AF%B86%E8%89%B2%E5%A2%A8%E6%B0%B4%E5%B1%8F%E8%BD%AC%E6%8E%A5%E6%9D%BF_%E9%80%82%E7%94%A8%E4%BA%8ES3%20DEMO%E5%BA%95%E6%9D%BF.pdf) |

### Samples

- [ESP32-S3 · S3 DEMO board · IST7601 SPI](./examples/esp32s3-idf5_ist7601-spi/)

## Buy

<p align="center">
  <a href="https://www.aliexpress.com/store/1105701619"><img alt="AliExpress store" src="https://img.shields.io/badge/AliExpress-Official_Store-FF6A00?style=for-the-badge" /></a>
  &nbsp;&nbsp;
  <a href="https://shop110742373.taobao.com/"><img alt="Taobao store" src="https://img.shields.io/badge/Taobao-Official_Store-FF6A00?style=for-the-badge" /></a>
</p>

**Overseas (AliExpress)**

- Store: [OSPTEK Official Store](https://www.aliexpress.com/store/1105701619)

**China (Taobao)**

- Store: [鱼鹰光电工厂店](https://shop110742373.taobao.com/)

## Support

- Technical support / product inquiry: <luyu@osptek.com>
- QQ group: **985881096**
- Website: <https://osptek.com/>
- Feel free to open an Issue in this repository with any questions

---

<p align="center"><sub>© 2026 OSPTEK · Materials in this repository are licensed under CC BY 4.0</sub></p>
