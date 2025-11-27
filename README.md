### tui ko compile đc nên tạm up tạm
#### chứ app lỗi ơi là lỗi, rất khó chịu
cách hoạt động
cho s bằng 3k6 rồi lấy biến dài rộng này nọ
giả sử rộng cũ là x, dài cũ là y. theo đề kêu thì rộng cộng 30 và dài cộng 20 bằng nhau hết đi thì...
```
x*y - 30*x + 20*y - 600 = 3600
vì x*y = 3600 nên:
-30x + 20y - 600 = 0
=> 30x - 20y = -600
=> 3x - 2y = -60  (chia cả 2 vế cho 10)
kết hợp với x*y = 3600
giải hệ phương trình:
y = 3600 / x
thay vào: 3x - 2*(3600/x) = -60
nhân 2 vế với x: 3x² + 120 = -60x ? Đợi, ta làm lại chính xác hơn:
từ 3x - 2y = -60
    // y = 3600 / x
    // => 3x - 2*(3600/x) = -60
    // nhân cả 2 vế với x: 3x² - 7200 = -60x
    // => 3x² + 60x - 7200 = 0
    // => x² + 20x - 2400 = 0  (chia 3)
```

