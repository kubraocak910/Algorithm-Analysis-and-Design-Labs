

# 📐 Algorithm Analysis & Design Labs

Bu depo (repository), **Algoritma Analizi** dersi kapsamında işlenen temel algoritmaların **C/C++** implementasyonlarını, zaman karmaşıklığı (Time Complexity) analizlerini ve performans karşılaştırmalarını içerir.

Projeler, **CLRS (Introduction to Algorithms)** kitabı referans alınarak; Divide and Conquer, Dynamic Programming ve Greedy yaklaşımları üzerine odaklanmıştır.

## 📚 Konu Başlıkları ve Analizler

| Algoritma | Kategori | Zaman Karmaşıklığı (Best/Avg/Worst) | Açıklama |
| :--- | :--- | :--- | :--- |
| **Merge Sort** | Sorting | $\Theta(n \lg n)$ | Kararlı, Böl-ve-Yönet tabanlı sıralama. |
| **Rod Cutting** | DP | $O(n^2)$ | Dinamik programlama ile optimizasyon (Çubuk Kesme). |
| **Linear Select**| Selection| $O(n)$ | Rastgele pivot seçimi ile k. elemanı bulma. |
| **Dijkstra** | Graph | $O(V^2)$ veya $O(E+V \lg V)$ | Ağırlıklı graflarda en kısa yol. |

## 🛠️ Teknik Detaylar
* **Dil:** C / C++ (Standart C99/C++11)
* **Derleyici:** GCC / Clang
* **Analiz Araçları:** Kod içinde yerleşik `clock()` tabanlı süre ölçümleyiciler.

## 🚀 Kurulum ve Çalıştırma
Her bir algoritma bağımsız çalışabilir yapıdadır. Derlemek için:
```bash
gcc 01_Sorting_and_Complexity/merge_sort_analysis.c -o merge_sort
./merge_sort
