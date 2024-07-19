#学习：Python异常
# fp=open('text.doc','r')
# fp.read()
# fp.close()
# No such file or directory: 'text.doc'
try:
    fp=open('text.doc','r')
    fp.read()
except FileNotFoundError:
    print("不存在此文件")