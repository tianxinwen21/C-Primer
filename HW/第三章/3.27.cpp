//(a) int ia[buf_size];   
//非法，buf_size不是常量
//(b) int ia[4*7-14];
//合法
//(c) int ia[txt_size()];   
//非法，txt_size()不是常量
//(d) char st[11] = "fundamental";
//非法，字符串的结尾有一个结束符，数组的大小不够

