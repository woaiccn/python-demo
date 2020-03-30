# -*- coding:utf-8 -*-
import re

f = open("联系方式")

phone_list = re.findall("[0-9]{11}",f.read())
print(phone_list)


# phone_list = []
#
# for lin in f:
#     name,city,high,wighet,phone = lin.split()
#     if phone.startswith("1"):
#         phone_list.append(phone)
# print(phone_list)




