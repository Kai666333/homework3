from flask import Flask, render_template, request
from account import app
@app.route('/')
def index():
    title = '主页'
    return render_template("index.html", title = title)
@app.route('/register', methods = ['GET', 'POST'])
def register():
    title = '注册页面'
    if request.method == 'GET':
        return render_template("register.html", title = title)
    else:
        username = request.form["USERNAME"]
        password = request.form["PASSWORD"]
        confirm = request.form["CONFIRM"]
        if password == confirm:
            message = '注册成功'
        else:
            message = '密码不一致'
        return render_template("message.html", title = title, message = message)
@app.route('/login')
def login():
    title = '登陆页面'
    if 'USERNAME' in request.args:
        username = request.args.get('USERNAME')
        password = request.args.get('PASSWORD')
        if username != '' and password != '':
            message = username + ' ' + password
        else:
            message = '请输入用户名或密码'
        return render_template("message.html", title = title, message = message)
    return render_template("login.html", title = title)