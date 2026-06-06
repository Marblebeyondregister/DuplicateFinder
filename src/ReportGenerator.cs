using System.Text;

namespace DuplicateFinder
{
    public class ReportGenerator
    {
        public string Generate()
        {
            StringBuilder report = new();

            report.AppendLine("DuplicateFinder Report");

            return report.ToString();
        }
    }
}
