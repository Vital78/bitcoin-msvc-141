
Get-ChildItem -Recurse -Force -Include .vs,*.dir,GeneratedFiles | Remove-Item -Recurse -Force
