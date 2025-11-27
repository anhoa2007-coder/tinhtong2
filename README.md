# 📘 Tóm tắt bài toán: Tính chu vi ban đầu của thửa đất

## 📝 Đề bài
- Một thửa đất hình chữ nhật có diện tích ban đầu là **3600 m²**.  
- Nếu **tăng chiều rộng thêm 20 m** và **giảm chiều dài đi 30 m**, diện tích vẫn **không đổi**.  
- Yêu cầu: Tìm **chu vi ban đầu** của thửa đất.  

## 📥 Dữ liệu vào
- Một số thực `S`: diện tích ban đầu của thửa đất (m²).  

## 📤 Dữ liệu ra
- Một số thực duy nhất: chu vi ban đầu của thửa đất (m), làm tròn 2 chữ số thập phân.  

## 🔍 Ví dụ
| Input | Output |
|-------|--------|
| 3600  | 260.00 |

## 💡 Ý tưởng giải
- Gọi `x` là chiều rộng ban đầu, `y` là chiều dài ban đầu.  
- Ta có hệ phương trình:
  - `x * y = 3600`
  - `(x + 20) * (y - 30) = 3600`
- Giải hệ để tìm `x, y`.  
- Chu vi:  
  - `P = 2 * (x + y)`

## ✅ Kết quả
- Chu vi ban đầu: **260.00 m**
