 KIỂU DỮ LIỆU MẢNG

1.khái niệm

-mảng là một tập hợp các giá trị có cùng kiểu dữ liệu nằm liên tiếp nhau trong bộ nhớ máy tính

-Mảng có những thành phần sau:

  +Kiểu dữ liệu của các phần tử trong mảng
  
  +Tên mảng

  +Số chiều và kích thước của mỗi chiều 
  
  -Mỗi phần tử sẽ được xác định bằng một  số thứ tự của nó trong mảng. Số thự từ được đánh số từ 0  

  2.cú pháp  : (kiểu dữ liệu) (tên mảng) (ds các chiều của mảng);  
  
  ví dụ: int C[100];  
  
  3.cách tổ chức truy xuất đến phần tử mảng    

+Phần tử của mảng được xác định thông qua chỉ số. Chỉ số của phần tử trong mảng luôn là một số nguyên không vượt qua kích thước của mảng  

+Các phần tử của mảng được sắp xếp liền nhau trong bộ nhớ của máy tính và chỉ cho phép truy cập đến địa chỉ trực tiếp của phần tử đối với mảng một chiều. Cách truy cập theo địa chỉ

       &tên_biến[i]
       
  *ví dụ:
  
  b=&b[2]  
  
 4.Cách xuất nhập dữ liệu trên mảng    
  Nhập xuất trực tiếp cho mảng một chiều và mảng hai chiều có phần tử kiểu int thông qua địa chỉ và in các mảng ra ngoài màn hình
  
  ví dụ:  int i;  
  
  for(i=1;i<10;i++)
  
  { printf("phan tu thu%d",i);
 
  scanf("%d",&a[i]);
  
  printf("%d",a[i]);
  
 II.KIỂU MẢNG  

1.MẢNG MỘT CHIỀU  

 a)khái niệm 
 
 -Dãy các phần tử có cùng kiểu dữ liệu

-Các phần tử được sắp xếp theo trật tự nhất định

b)cú pháp   
    
   + kiểu_dữ_liệu tên_mảng[số_phần_tử_của_mảng];
    
   + Chỉ số các phần tử mảng được đánh số từ 0
c) Khởi tạo mảng

 -Mảng có thể được khởi tạo giá trị ngay khi khai báo


-Cú pháp

+kiểu_dữ_liệu tên_mảng[số_phần_tử_của_mảng] ={ danh_sách_các_giá_trị_khởi_tạo};

-Khi khai báo mảng có khởi tạo giá trị thì có thể không cần chỉ ra số phần tử mảng
 
 *VÍ DỤ:
 int ai[1]={2};
 
 d)Mảng và địa chỉ

-Toán tử & dùng để lấy địa chỉ một biến  

-Toán tử & cũng được dùng để lấy địa chỉ của một phần tử mảng  

-Các phần tử trong mảng được bố trí các ô nhớ liên tiếp nhau trên bộ nhớ  

-Nếu biết được địa chỉ phần tử thú i sẽ xác định được địa chỉ phần tử thú i+1  

-Địa chỉ phần tử đầu tiên là địa chỉ của mảng  

-Tên mảng mang địa chỉ của mảng đó  
e) Mảng là tham số của hàm  
f)Sắp xếp mảng  

-Sắp xếp các phần tử của mảng sao cho giá trị chúng theo thứ tự tăng dần hay giảm dần  
-các loại sắp xếp: Sắp xếp lựa chọn,Sắp xếp nổi bọt và sắp xếp nhanh  
                
h)Tìm kiếm phần tử trong mảng  

có 2 cách:-Tìm kiếm tuần tự và tìm kiếm nhị phân
          
 2. MẢNG NHIỀU CHIỀU  
  
  a)khái niệm  
    
    Mảng nhiều chiều là mảng chứa n phần tử, mỗi phần tử là một mảng một chiều  
  
  b)cú pháp  
 
 +kiểu_dữ_liệu	tên_mảng[số_phần_tử_chiều_1][số_phần_tử_chiều_2]...[ số_phần_tử_chiều_n];  
 
 *kiểu_dữ_liệu, tên_mảng, số_phần_tử_chiều_x có quy tắc sử dụng tương tự như mảng một chiều là phải là hằng số.  
