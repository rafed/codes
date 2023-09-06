import pikepdf

file = "150920XXXXXX1001-H1-2022-110145409.pdf"

for i in range(999999):
    password = f"150920{i:06}1001"
    print(password)
    try:
        with pikepdf.open(file, password=password) as pdf:
            print("[+] Password found:", password)
            break
    except pikepdf._qpdf.PasswordError as e:
        continue
