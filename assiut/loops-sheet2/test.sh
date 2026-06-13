for i in {1..20}; do
    echo "input is $i\n"
    zrunner h.cpp <<< "$i"
done
