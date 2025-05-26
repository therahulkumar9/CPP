#!/bin/bash

# Set the directory path
dir_path="/home/rk/Downloads/C++"

# Function to process files in a directory
process_directory() {
    local dir="$1"
    cd "$dir"
    
    # Get a sorted list of subdirectories based on last modified time
    readarray -t subdirs < <(ls -td */)
    
    # Loop through the subdirectories and add the prefix
    for i in "${!subdirs[@]}"; do
        subdir="${subdirs[$i]%/}"
        prefix=$(printf "%02d_" $((${#subdirs[@]}-i)))
        new_subdir="${prefix}${subdir}"
        
        # Check if the subdirectory exists before renaming
        if [ -d "$subdir" ]; then
            mv "$subdir" "$new_subdir" || echo "Failed to rename $subdir"
            
            # Process files inside the renamed subdirectory
            process_files "$new_subdir"
        else
            echo "Skipping non-existent subdirectory: $subdir"
        fi
    done
    
    cd - > /dev/null
}

# Function to process files inside a subdirectory
process_files() {
    local subdir="$1"
    cd "$subdir"
    
    # Get a sorted list of files based on last modified time
    readarray -t files < <(ls -t)
    
    # Loop through the files and add the prefix
    for i in "${!files[@]}"; do
        file="${files[$i]}"
        prefix=$(printf "%02d_" $((${#files[@]}-i)))
        new_file="${prefix}${file}"
        
        # Check if the file exists before renaming
        if [ -e "$file" ]; then
            mv "$file" "$new_file" || echo "Failed to rename $file"
        else
            echo "Skipping non-existent file: $file"
        fi
    done
    
    cd - > /dev/null
}

# Call the function with the initial directory path
process_directory "$dir_path"
