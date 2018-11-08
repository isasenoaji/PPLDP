# Design Patter : Composite & State

## Composite
![Composite Overview](https://github.com/isasenoaji/PPLDP/blob/master/composite.png)

Dipakai ketika objek-objeknya memiliki karateristik dan behaviour yang mirip
- Contoh : Sebuah window yang memiliki canvas & sub-window dan sub-window tsb memiliki canvas & sub-window lagi
- Terlalu general sehingga leaf-nya susah memiliki ciri khas

## State
![State Overview](https://github.com/isasenoaji/PPLDP/blob/master/state.png)

*Behavioral design pattern* yang method / behavioralnya berubah sesuai state.
- Dipakai ketika ingin enkapsulasi branch / tidak koding secara langsung
