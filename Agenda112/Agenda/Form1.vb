Public Class Form1
    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        End
    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim save As System.IO.StreamWriter
        save = New IO.StreamWriter("D:\\Agenda\\agenda.txt", True)
        save.WriteLine(TextBox1.Text & " - " & TextBox2.Text & " - " & ComboBox1.SelectedItem)
        save.Close()

    End Sub
End Class
