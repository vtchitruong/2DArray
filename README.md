## Tổng quát

Các bài tập sau đây dùng để *luyện ngón* đối với mảng-2-chiều.  

## Bài tập
### Khởi tạo mảng-2-chiều
Chương trình này giới thiệu một vài cách khai báo, khởi tạo và xóa mảng-2-chiều.  

### Chuyển đổi qua lại giữa mảng-2-chiều và mảng-1-chiều
**Yêu cầu**  
Viết một hàm chuyển đổi từ mảng-2-chiều thành mảng-1-chiều, và một hàm thực hiện chuyển đổi ngược lại.  

**Input 1**  
Mảng-2-chiều:  
3 6 7 5 3 5  
6 2 9 1 2 7  
0 9 3 6 0 6  
2 6 1 8 7 9  

**Output 1**  
Chuyển đổi thành mảng-1-chiều:  
3 6 7 5 3 5 6 2 9 1 2 7 0 9 3 6 0 6 2 6 1 8 7 9  

**Input 2**  
Mảng-1-chiều:  
2 0 2 3 7 5 9 2 2 8 9 7 3 6 1 2 9 3 1 9 4  

**Output 2**  
Chuyển đổi thành mảng-2-chiều:  
2 0 2 3 7 5 9  
2 2 8 9 7 3 6  
1 2 9 3 1 9 4  

### Khởi tạo ma trận vuông
**Yêu cầu**  
Khởi tạo ma trận vuông gồm các phần tử đều là 0.  
Gán các phần tử nằm trên đường chéo chính là 1.  
Gán các phần tử nằm trong tam giác dưới đường chéo chính là 2.  

**Input**  
n = 8 là kích thước của ma trận vuông.  

**Output**  
1 0 0 0 0 0 0 0  
2 1 0 0 0 0 0 0  
2 2 1 0 0 0 0 0  
2 2 2 1 0 0 0 0  
2 2 2 2 1 0 0 0  
2 2 2 2 2 1 0 0  
2 2 2 2 2 2 1 0  
2 2 2 2 2 2 2 1  

### Ma trận chuyển vị
**Yêu cầu**  
Viết hàm tạo ma trận chuyển vị của ma trận đã cho. Nghĩa là chuyển hàng thành cột và cột thành hàng.  

**Input**  
Ma trận A:
3 6 7 5 3 5 6 2  
9 1 2 7 0 9 3 6  
0 6 2 6 1 8 7 9  
2 0 2 3 7 5 9 2  

**Output**  
Ma trận B là ma trận chuyển vị của A:  
3 9 0 2  
6 1 6 0  
7 2 2 2  
5 7 6 3  
3 0 1 7  
5 9 8 5  
6 3 7 9  
2 6 9 2  

### Bàn cờ vua
**Yêu cầu**  
In ra màn hình ma trận mô phỏng bàn cờ vua, nghĩa là các ô có giá trị 0 và 1 xen kẽ nhau.  

**Input**  
n = 8 là kích thước của bàn cờ.  

**Output**  
0  1  0  1  0  1  0  1  
1  0  1  0  1  0  1  0  
0  1  0  1  0  1  0  1  
1  0  1  0  1  0  1  0  
0  1  0  1  0  1  0  1  
1  0  1  0  1  0  1  0  
0  1  0  1  0  1  0  1  
1  0  1  0  1  0  1  0  


### Tam giác Pascal
**Yêu cầu**  
Sử dụng mảng-2-chiều để hiển thị các hệ số của nhị thức trong Pascal.

**Input**  
n = 10 là số hàng của tam giác Pascal.  

**Output**  
   1  
   1   1  
   1   2   1  
   1   3   3   1  
   1   4   6   4   1  
   1   5  10  10   5   1  
   1   6  15  20  15   6   1  
   1   7  21  35  35  21   7   1  
   1   8  28  56  70  56  28   8   1  
   1   9  36  84 126 126  84  36   9   1  


### Ma trận zigzag
**Yêu cầu**  
In ra màn hình ma trận zigzag, cách gọi khác là hình con rắn.  

**Input**  
n = 8 là kích thước của ma trận.    

**Output**  
    1    2     3    4    5    6     7    8
  16  15  14  13  12  11  10    9
  17  18  19  20  21  22  23  24
  32  31  30  29  28  27  26  25
  33  34  35  36  37  38  39  40
  48  47  46  45  44  43  42  41
  49  50  51  52  53  54  55  56
  64  63  62  61  60  59  58  57

### Ma trận xoắn ốc
**Yêu cầu**  
In ra màn hình ma trận xoắn ốc từ ngoài vào trong.  

**Input**  
n = 8 là kích thước của ma trận.    

**Output**  
    1    2     3    4    5    6     7    8  
  28  29  30  31  32  33  34    9  
  27  48  49  50  51  52  35  10  
  26  47  60  61  62  53  36  11  
  25  46  59  64  63  54  37  12  
  24  45  58  57  56  55  38  13  
  23  44  43  42  41  40  39  14  
  22  21  20  19  18  17  16  15  


  ## Gợi ý  

###  Chuyển đổi qua lại giữa mảng-2-chiều và mảng-1-chiều  

Xét một phần tử nào đó, gọi:  
 *i* là chỉ số của phần tử này trong mảng-1-chiều.  
*r* và *c* lần lượt là chỉ-số-hàng và chỉ-số-cột của phần tử này trong mảng-2-chiều.  

- Chuyển từ mảng-2-chiều thành mảng-1-chiều:  

Công thức tính *i* là:  
i  =  r  * số-phần-tử-mỗi-hàng  +  c  

- Chuyển từ mảng-1-chiều thành mảng-2-chiều:  
Công thức tính *r* và *c* là:  
r  =  i  /  số-phần-tử-mỗi-hàng  
c  =  i  %  số-phần-tử-mỗi-hàng  


###  Bàn cờ vua  

Vì trong bàn cờ, các ô 0 và 1 xen kẽ nhau theo chiều ngang lẫn chiều dọc, nên ta chỉ cần lấy tổng của **chỉ-số-hàng** và **chỉ-số-cột** của mỗi ô, đem chia 2 lấy dư, sẽ nhận được giá trị 0 hoặc 1 để gán cho ô đó.  

### Tam giác Pascal  

Ứng với mỗi hàng trong tam giác Pascal, phần tử đầu tiên và phần tử cuối cùng đều là 1.  
Với các phần tử ở giữa, mỗi phần tử là tổng của hai phần tử nằm ở cùng cột và ở cột liền trước thuộc hàng liền bên trên.  
a\[r\]\[c\] =  a\[r - 1\]\[c\] +  a\[r  -  1\]\[c  -  1\]  

### Ma trận zigzag  

Duyệt từng hàng:  

-- Đối với hàng chẵn 0, 2, 4, etc, thì điền số tăng dần vào các ô từ trái sang phải.  

-- Đối với hàng lẻ 1, 3, 5, etc, thì điền số tăng dần vào các ô từ phải sang trái.  

###  Ma trận xoắn ốc  

Dùng vòng lặp while, lần lượt điền số vào 4 cạnh biên của từng ma trận con (là ma trận nhỏ hơn vì *bị xoắn ốc*), cho đến khi số được điền vào có giá trị bằng với kích thước của ma trận gốc:  

-- *Cạnh trên*: Lần lượt điền số vào các ô từ trái sang phải, cho đến ô liền trước *cạnh phải*.  
-- *Cạnh phải*: Lần lượt điền số vào các ô từ trên xuống dưới, cho đến ô nằm ngay trên *cạnh dưới*.  
-- *Cạnh dưới*: Lần lượt điền số vào các ô từ phải sang trái, cho đến ô liền trước *cạnh trái*.  
-- *Cạnh trái*: Lần lượt điền số vào các ô từ dưới lên trên, cho đến ô nằm kế dưới *cạnh trên*.  

||||||
| --- | --- | --- | --- | --- |
| 1 | 2 | 3  | _4_ | 5 |
| _16_ | | | | 6 |
| 15 | | | | 7 |
| 14 | | | | _8_ |
| 13 | _12_ | 11 | 10 | 9 |