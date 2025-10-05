# XOX-Game

**XOX-Game**, C++ kullanarak geliştirilmiş basit bir XOX (Tic Tac Toe) oyunudur. Bu proje, kullanıcıların iki oyuncu arasında X ve O ile oynayabileceği klasik bir oyun deneyimi sunmaktadır.

## Özellikler

- 2 oyuncu desteği (X ve O)
- Dinamik oyun tahtası
- Kazanan kontrolü ve berabere durumu
- Kullanıcı dostu komut satırı arayüzü
- Oyun bitiminde sonuç bildirimi

## Gereksinimler

- C++ Compiler (GCC veya MSVC gibi)
- Git (opsiyonel, proje versiyon kontrolü için)
- IDE (CLion, Visual Studio Code vb.) veya terminal tabanlı çalışma

## Kurulum

1. Projeyi GitHub üzerinden klonlayın veya zip olarak indirin:

    ```bash
    git clone https://github.com/ysfgven/XOX-Game.git
    ```

2. Projeyi terminal veya IDE üzerinden açın.

3. CMakeLists.txt dosyasını kullanarak projeyi derleyin.

4. Derleme tamamlandığında, `XOX_Game.exe` dosyasını çalıştırarak oyunu başlatabilirsiniz.

 **Önemli : Exe Dosyasını powershell ile açmanız önerilir**

## Kullanım

- Oyunu başlatmak için terminalde `XOX_Game.exe` dosyasını çalıştırın.
- Oyuncular sırayla, 1 ile 9 arasında bir hücre seçer ve O/X sembolü ile işaretler.
- Oyun, bir oyuncunun kazanması veya berabere durumu oluşana kadar devam eder.
- Kazanan oyuncu veya berabere durumu ekranda görüntülenir.

## Dosya Yapısı

- `XOX-Game/`
  - `src/` → C++ kaynak kodları
  - `include/` → Başlık dosyaları (header files)
  - `CMakeLists.txt` → CMake yapılandırma dosyası
  - `main.cpp` → Oyun giriş noktası
  - `.gitignore` → Git tarafından göz ardı edilecek dosyalar

## **Bilinen Sorunlar**
- Terminal temizleme komutları Windows özel olduğu için farklı platformlarda çalışmaz
- İki kullanıcı da aynı girdiyi alabiliyor (X/O)
- GUI yok console uygulamasıdır

  ## **İleriki Planlar**

- **Yapay Zeka (AI) eklemek**: Oyunun tek oyunculu versiyonunu ekleyerek, oyunculara bilgisayara karşı oynama imkanı sağlamak.
- **Çoklu Seviye Zorluk**: Yapay Zeka'ya farklı zorluk seviyeleri ekleyerek, oyuncuların karşılaşabileceği zorlukları çeşitlendirmek.


