/*

giao diện em đang thấy là một IDE để chạy mã nguồn C hay C++, ngoài ra nó còn
đùng để chay nhiều ngôn ngữ khác nữa :))

*/

// Đây là ký hiệu comment, mọi thứ sau dấu // thì sẽ không có tác dụng trong mã nguồn

/*
	Đây cũng là một comment, mọi thứ trong này đều ko có tác dụng trong mã nguồn, vậy nó dùng
	để làm gì, tất nhiên là dùng để comment, note những gì cần chú ý trogn code rồi :))
*/

#include<iostream> // ĐÂy là một thư viện trong C++
#include<stdio.h> // Đây là một thư viện trong C

// Thư viện như một nhà máy cung cấp các công cụ để lập trình thôi, các công cụ này là các
// mã lệnh ...
/*
	trong 2 thư viện ở trên ta hay dùng nhất là dùng để nhập xuất một cái gì đó trên màn hình console
	em có thể tìm hiểu nó trên bác google
	iostream cung cấp cout và cin
	stdio.h cung cấp printf và scanf

*/

/*
	Đoạn mã vừa rồi về sau sẽ áp dụng, nhưng bây giờ chỉ áp dụng mã sau
*/
// Hàm main là hàm chính trong một chương trình. Mọi thứ chỉ được thực hiện khi nằm trong hàm main
// Nhưng mà nằm ngoài sai cú pháp thì vẫn bị báo lỗi và ko thực thi được như thường

using namespace std;

void main() {
	// Ví dụ đầu tiên là xuất ra dòng chữ Hello World ! 

	// với chuognư trình C++
	//cout << " Hello World !"; 
	// vì sao đây báo lỗi vì nó phải dùng một namespace mới dùng đc
	// namespace là gì chưa cần quan tâm, nhưng có thể tìm hiểu nhé !
	// bây giờ cả cout và cin đều phải sử dụng namespace std
	//std::cout << "\n\n\n\t\tHello World ! \n\n\n";

	// \n là xuống 1 dòng, \t là lùi vô 1 tab tương ứng với 3 dấu khoảng trắng
	// ví dụ trên tương ứng với xuống 3 dòng dòng thứ 4 mới in ra chữ ... đó
	//sau khi xuống 3 dòng thì lùi và 2 tab mới xuất ra chữ ...

	// Những cái tào lao cúi cùng là thông tin của chương trình thôi, rãnh thì đọc chơi, ko thì
	// không quan tâm cũng ko sao

	// Bây giờ ko dùng std::cout nữa
	// ta có thể sử dụng using namespace std; đăt sau thư viện để sử dụng

	//cout << "\n\n\n\t\tHello World ! \n\n\n"; // kết quả như cũ nhá
	// nãy giờ là dạo chơi trên thư viện iostream thôi

	// giờ chơi trên stdio.h nha, luu ý là không được cùng lúc chạy 2 loại chuognư trình
	// nếu dùng C ko được dùng thêm cú pháp C++, vậy nên dùng stdio.h thì ko dùng iostream
	// mặt dù có khai báo nhưng ko dùng đc, t có thể bỏ nó đi cx được :)). dùng cái nào mình cần thôi


	//printf_s("\n\n\n\t\tHello World ! \n\n\n"); // tương tự như cout thôi

	// Nãy giờ là toàn xuất ra thôi, chưa có nhập vào 
	// giờ là demo trc thôi nha, ko nói rõ. Mai nói rõ.

	int n;
	//cout << "Nhap vao mot so tu nhien nao do: ";
	//cin >> n;
	//cout << "n^2 cua no la: " << n * n;

	// tương tự  vs C

	printf_s("Nhap vao mot so tu nhien nao do: ");
	scanf_s("%d", &n);
	printf_s("n^2 cua no la: %d", n * n);

	// lưu ý là comment thì viết có dấu được
	// nhưng console thì ko có dấu đc đâu nhé.
	// Qua C# đẹp hơn, có giao diện các kiểu, 
	// ráng đi 4 tuần a đẩy hết OOP rồi sang C# làm ứng dụng là mê liền àk

	//có lẽ a ko chỉ làm game console đâu vì nó hơi khó, mà cx hên xui a siêng a chỉ cho
	// Cái em vừa thấy là ví dụ đơn giản nhất về C# nhé, nó làm dễ lắm vài phút là xong.

	// Bài này nói sơ qua thôi. Tài liệu a gửi em ở phần mô tả, tài liệu tham khảo người ta thôi :))
	// Tại anh cũng ko có nhiều thời gian để soạn tài liệu riêng đc, với chắc chắn ko đủ
	// Lập trình phải chịu khó,tìm kiến nhiều nguồn khác nhau nhé. 

	/*
		MONG LÀ EM SẼ KHÔNG NẢN, VÌ NẢN LÀ THẤT BẠI ĐỦ ĐIỀU TRONG CUỘC SỐNG !
	*/

}