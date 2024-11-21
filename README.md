# Tutorial Github
## Cara Menggunakan Git & Github
### A. Prosedur Awal
#### 1. Pertama download github
https://git-scm.com/downloads
#### 2. Membuat akun github
https://github.com/join
#### 3. Melakukan setting pada Windows Powershell
git config --global user.name (masukkan username)
git config --global user.email (masukkan email)
#### 4. Membuat SSH pada halaman Github
Buka halaman github kemudian membuka halaman setting dilanjutkan dengan SSH dan GPH key dan copy new SSH Keys
#### 5. Untuk key sendiri dapat dibuat dengan cara membuka Windows Powershell dan memasukkan command line berikut
ssh-keygen -t ed25519 -C (masukkan email)
Kemudian pencet enter 2x
#### 6. Copy clip SSH key yang telah dibuat dengan menggunakan command berikut
clip < ~/.ssh/id_ed25519.pub
#### 7. Kemudian paste atau Ctrl+V ke bagian key pada setting New SSH Key di Github
#### B. Membuat Repository
#### 1. Buka laman Github
https://github.com/new
#### 2. Masukkan nama repository yang diinginkan beserta tipenya (private atau public) kemudian klik create repository
#### 3. Buka repository yang telah dibuat
#### 4. Klik Code kemudian SSH selanjutnya pencet tombol kotak untuk meng-copy link SSH
#### 5. Untuk menghubungkan dengan file local bisa menggunakan dua cara sebagai berikut (kedua cara ini juga bisa digunakan untuk mendownload repository yang telah ada isinya ke file local):
### a. manual
#### i. Membuat folder di File Explorer dengan judul folder sama seperti repository
#### ii. Klik kanan dan buka Windows Powershell
#### iii. masukkan command line berikut pada Powershell
git init
git remote add origin (link SSH yang telah di-copy)
git branch -M main
#### iv. Agar memastikan folder di local sama dengan folder di Github, masukkan command line berikut pada Powershell
git pull origin (branch yang ingin didownload)
# B. Git Clone
### i. Buka Powershell pada folder parent yang diinginkan dan masukkan command line berikut
git clone (link SSH yang telah di-copy)
### ii. Folder/Repository akan muncul pada File Explorer / Folder parent yang telah dipilih
### iii. Kemudian buka folder tersebut
### iv. Klik kanan dan buka Git Bash
### v. Masukkan command line berikut pada Powershell
git branch -M main
# C. Mengunggah File Local ke Github
### 1. Folder yang telah dibuat tersebut dapat secara bebas diisi dengan apa saja, tetapi baru tersimpan di local dan perlu diupload ke Github
### 2. Buka folder local yang telah dibuat dan isi
### 3. Klik kanan dan buka Powershell
### 4. Masukkan command berikut
git add .
git commit -m "(ketikkan deskripsi dengan bebas)"
git push origin (branch yang ingin diupload)
# D. Membuat Branch baru di github
### 1. Branch memiliki fungsi yang mirip dengan folder, branch dapat melakukan perubahan versi di folder atau memasukkan isi yang lain tanpa menganggu branch utama
### 2. Buka folder yang diingikan yang telah terhubung dengan Github
### 3. Klik kanan dan buka Powershell
### 4. Masukkan command line berikut pada Powershell
git checkout -B (nama branch yang diinginkan)
### 5. Untuk pindah ke branch yang telah dibuat dapat menggunakan command line berikut
git checkout (nama branch yang telah dibuat)
# E. Menghapus Branch di Github
### 1. Pindah ke branch lain yang tidak dihapus dengan command line berikut
git checkout (nama branch yang diinginkan)
### 2. Masukkan command line berikut untuk menghapus branch yang dipilih
git branch -d (nama branch yang ingin dihapus)
# F. Menggabungkan Branch di Github
### 1. Pindah ke branch yang ingin menjadi branch utama dari branch yang ingin digabungkan dengan command line berikut
git checkout (nama branch yang diinginkan)
### 2. Gabungkan dengan command berikut
git merge (nama branch yang ingin digabungkan)
