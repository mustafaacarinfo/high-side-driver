# high-side-driver
high-side-driver

high-side-driver/
├── README.md               # Proje hakkında genel bilgi
├── LICENSE                 # Lisans bilgisi
├── docs/                   # Proje dokümantasyonu
├── include/                # Header dosyaları
│   ├── hss/                # High-Side Switch soyutlamaları
│   │   ├── gpio.hpp        # GPIO soyutlama katmanı
│   │   ├── adc.hpp         # ADC soyutlama katmanı
│   │   ├── timer.hpp       # Timer soyutlama katmanı
│   │   ├── hss.hpp         # Genel HSS sınıf tanımı
│   │   ├── hss-shield.hpp  # Shield sınıfı tanımı
│   │   ├── variants.hpp    # HSS varyantları
│   └── utils/              # Yardımcı araçlar
│       ├── filter.hpp      # Filtreleme sınıfı
│       ├── constants.hpp   # Sabit değerler
│       ├── error_codes.hpp # Hata kodları
├── src/                    # Kaynak dosyaları
│   ├── hss/                # High-Side Switch implementasyonları
│   │   ├── gpio.cpp        # GPIO soyutlama implementasyonu
│   │   ├── adc.cpp         # ADC soyutlama implementasyonu
│   │   ├── timer.cpp       # Timer soyutlama implementasyonu
│   │   ├── hss.cpp         # Genel HSS sınıfı implementasyonu
│   │   ├── hss-shield.cpp  # Shield sınıfı implementasyonu
│   │   ├── variants.cpp    # HSS varyantlarının tanımlamaları
│   └── utils/              # Yardımcı araçlar
│       ├── filter.cpp      # Filtreleme sınıfı implementasyonu
├── tests/                  # Testler için kaynak dosyaları
│   ├── mock/               # Mock sınıfları
│   │   ├── mock_gpio.hpp   # GPIO mock sınıfı
│   │   ├── mock_adc.hpp    # ADC mock sınıfı
│   │   ├── mock_timer.hpp  # Timer mock sınıfı
│   ├── hss_test.cpp        # HSS birim testleri
│   ├── shield_test.cpp     # Shield birim testleri
├── tools/                  # Yardımcı araçlar ve scriptler
│   ├── build.sh            # Derleme scripti
│   ├── run_tests.sh        # Test çalıştırma scripti
│   ├── format_code.sh      # Kod formatlama scripti
└── third_party/            # Üçüncü parti bağımlılıklar
    ├── googletest/         # Google Test kaynakları
    ├── cmake_modules/      # CMake modülleri
