echo "Enter ABC contest folder name:"
read contest_name
mkdir "$contest_name"
filename_array=("A" "B" "C" "D" "E" "F" "G" "H")
for i in "${filename_array[@]}"; do
    cp cptemplate.cpp "$contest_name/$i.cpp"
done
cd "$contest_name"