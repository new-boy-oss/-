//后台管理
#include"Commodity.h"
#include"Raw_material.h"
#pragma once
class Back_stage_management:public Commodity
{
public:
	void manage_login();//管理员登录
	int add_product();//添加商品
	void change();//修改商品数量和价格
	Back_stage_management();
	~Back_stage_management();
private:
	string manage_account;//管理员账号
	string manage_key;//管理员密码
};

